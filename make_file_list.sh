#!/bin/sh

function make_file_list() {
	local num=$#
	local search_dir=$1
	local target_name=$2

	if [ $num -ne 2 ]; then
		exit 1
	fi

	find $search_dir -name "*.cpp" | sed -e 's/\s\+/\n/g' | sort > srcs.tmp
	find $search_dir -name "*.h" | sed -e 's/\s\+/\n/g' | sort > c_headers.tmp
	find $search_dir -name "*.hpp" | sed -e 's/\s\+/\n/g' | sort > cpp_headers.tmp

	echo "LIST (APPEND ${target_name}_SOURCES" > ${target_name}.cmake
	cat srcs.tmp | sed -e 's/^/    /g' >> ${target_name}.cmake
	echo ')' >> ${target_name}.cmake

	echo "LIST (APPEND ${target_name}_HEADERS" >> ${target_name}.cmake
	cat c_headers.tmp | sed -e 's/^/    /g' >> ${target_name}.cmake
	cat cpp_headers.tmp | sed -e 's/^/    /g' >> ${target_name}.cmake
	echo ')' >> ${target_name}.cmake

	rm -f srcs.tmp c_headers.tmp cpp_headers.tmp
	return 1
}

make_file_list $1 $2
