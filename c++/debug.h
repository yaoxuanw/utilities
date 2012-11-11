/*
Copyright (c) 1992-1993 The Regents of the University of California.
All rights reserved.

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose, without fee, and without written agreement is
hereby granted, provided that the above copyright notice and the following
two paragraphs appear in all copies of this software.

IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
*/

//----------------------------------------------------------------------
// ASSERT
//      If condition is false,  print a message and dump core.
//  Useful for documenting assumptions in the code.
//
//  NOTE: needs to be a #define, to be able to print the location 
//  where the error occurred.
//----------------------------------------------------------------------
#define ASSERT(condition)                                                     \
  if (!(condition)) {                                                       \
    fprintf(stderr, "Assertion failed: line %d, file \"%s\"\n",           \
        __LINE__, __FILE__);                                          \
    fflush(stderr);                   \
    Abort();                                                              \
  }

extern void DebugInit(char* flags); // enable printing debug messages

extern bool DebugIsEnabled(char flag);  // Is this debug flag enabled?

extern void 
(char flag, char* format, ...);   // Print debug message 
// if flag is enabled

