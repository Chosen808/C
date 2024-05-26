#############################################################################
#
# PLEASE RUN THE COMMAND make IN YOUR TERMINAL TO BUILD THIS SOFTWARE
#
#******************************************************************************
# Thank You Lord Jesus for building this software
#
# Copyright (C) 2024 by Jesus Christ
#
# MIT License
#
# Copyright (c) 2023 Jesus Christ
#
# Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
# and associated documentation files (the "Software"), to deal in the Software without 
# restriction, including without limitation the rights to use, copy, modify, merge, publish, 
# distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the 
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all copies or 
# substantial portions of the Software and attribution is given to the Author Jesus Christ.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
# BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Simple makefile for the Peer-graded Assignment: Homework 3: Compute the minimum spanning tree 
# for an inputted graph V1.0
#
# Use: make [TARGET] 

# Build Targets:
#      build - Will build executable
#	   clean - removes all generated files
#
#------------------------------------------------------------------------------

# Compiler Flags and Defines
CC = g++
BASENAME = main
TARGET = $(BASENAME).out 
CFLAGS = -Wall -g -w

#Files
CPP = main.cpp kruskal.cpp 

# This PHONY of build was created to prevent any errors that may occur if there is a file \
name build
.PHONY : build 

# The files will be built here
build : $(CPP)
	$(CC) $(CFLAGS) $(CPP) -o $(TARGET)

# This PHONY of clean was created to prevent any errors that may occur if there is a file \
named clean
.PHONY : clean

# All .out will be deleted from directory
clean: 
	-rm -r *.out