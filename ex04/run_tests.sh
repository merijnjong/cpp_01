#!/bin/bash
set -e

PROGRAM=./program

if [ ! -x "$PROGRAM" ]; then
	echo "Error: $PROGRAM not found or not executable."
	exit 1
fi

echo "Creating test files..."

# Test 1: Normal replacement
printf "hello world\nhello again" > test1.txt
printf "hi world\nhi again" > test1_expected.txt

# Test 2: No matches
printf "nothing to replace here" > test2.txt
cp test2.txt test2_expected.txt

# Test 3: Empty file
> test3.txt
> test3_expected.txt

# Test 4: s1 and s2 are the same
printf "unchanged content" > test4.txt
cp test4.txt test4_expected.txt

# Test 5: (invalid input - s1 is empty) handled separately

# Test 6: Nonexistent file - no need to create

# Test 7: Special formatting (no trailing newline)
printf "tabs\tand    spaces   stay!\nnewline:\nnext line" > test7.txt
printf "tabs\tand    spaces   stay!\nnewsentence:\nnext sentence" > test7_expected.txt

# Test 8: Overlapping s1="aa" in "aaaa" -> "bb"
printf "aaaa" > test8.txt
printf "bb" > test8_expected.txt

echo "Running tests..."

# Helper function to compare output
run_test() {
	local test_num=$1
	local infile=$2
	local s1=$3
	local s2=$4
	local expected=$5

	outfile="${infile}.replace"
	rm -f "$outfile"

	$PROGRAM "$infile" "$s1" "$s2"
	if diff -q "$outfile" "$expected" > /dev/null; then
		echo "✅ Test $test_num passed"
	else
		echo "❌ Test $test_num FAILED"
		diff "$outfile" "$expected"
	fi
}

# Run tests
run_test 1 test1.txt hello hi test1_expected.txt
run_test 2 test2.txt hello hi test2_expected.txt
run_test 3 test3.txt hello hi test3_expected.txt
run_test 4 test4.txt unchanged unchanged test4_expected.txt
run_test 7 test7.txt line sentence test7_expected.txt
run_test 8 test8.txt aa b test8_expected.txt

# Test 5: s1 is empty (should error out)
echo -n "Running Test 5 (empty s1)... "
if $PROGRAM test1.txt "" hi 2>/dev/null; then
	echo "❌ FAILED (should have exited with error)"
else
	echo "✅ Passed"
fi

# Test 6: File doesn't exist
echo -n "Running Test 6 (nonexistent file)... "
if $PROGRAM nonexistent.txt hello hi 2>/dev/null; then
	echo "❌ FAILED (should have exited with error)"
else
	echo "✅ Passed"
fi

# Test 9: Missing arguments
echo -n "Running Test 9 (missing args)... "
if $PROGRAM test1.txt hello 2>/dev/null; then
	echo "❌ FAILED (should have exited with error)"
else
	echo "✅ Passed"
fi

echo "Cleaning up test files..."
sleep 10
rm -f test1.txt test1_expected.txt test1.txt.replace \
      test2.txt test2_expected.txt test2.txt.replace \
      test3.txt test3_expected.txt test3.txt.replace \
      test4.txt test4_expected.txt test4.txt.replace \
      test7.txt test7_expected.txt test7.txt.replace \
      test8.txt test8_expected.txt test8.txt.replace

echo "All tests finished."
