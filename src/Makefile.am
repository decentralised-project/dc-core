# additional include paths necessary to compile the C++ programs
AM_CXXFLAGS = -I$(top_srcdir)/src @AM_CXXFLAGS@

###############################################################################
# THE LIBRARIES TO BUILD
###############################################################################

# the library names to build (note we are building static libs only)
lib_LIBRARIES = dcCore.a

# where to install the headers on the system
dcCore_adir = $(includedir)/mylib

# the list of header files that belong to the library (to be installed later)
dcCore_a_HEADERS =    \
                      core_client.hpp 

# the sources to add to the library and to add to the source distribution
dcCore_a_SOURCES =    \
                      $(dcCore_a_HEADERS) \
                      core_client.cpp 
