#!/bin/zsh

TEST_TARGET_DIR=./test_target
TEST_TARGET_INCLUDE_DIR=./test_target
UNIT_TESTS_DIR=./unit_tests
UNIT_TESTS_INCLUDE_DIR=./unit_tests
LIBUNIT_DIR=../framework
LIBUNIT_INCLUDE_DIR=../framework/includes

make -C ${LIBUNIT_DIR}
gcc -I${TEST_TARGET_INCLUDE_DIR} ${TEST_TARGET_DIR}/*.c \
	-I${UNIT_TESTS_INCLUDE_DIR} ${UNIT_TESTS_DIR}/*.c \
	-I${LIBUNIT_INCLUDE_DIR} -L${LIBUNIT_DIR} -lunit
echo
./a.out
