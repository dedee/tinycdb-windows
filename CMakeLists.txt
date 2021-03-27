cmake_minimum_required(VERSION 3.10)

# set the project name
project(tinycdb)

# add the executable
add_executable(tinycdb cdb.c cdb_find.c cdb_findnext.c  cdb_hash.c cdb_init.c cdb_make.c cdb_make_add.c cdb_make_put.c cdb_seek.c cdb_seq.c cdb_unpack.c getopt.c)

