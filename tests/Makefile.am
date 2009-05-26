
AM_CFLAGS = -Wall -I../$(SRCDIR)/src

INCLUDES = -I$(top_srcdir)/src

bin_PROGRAMS = 

TESTS = test-sample-1.sh

EXTRA_DIST = $(TESTS)

TESTS_ENVIRONMENT = top_srcdir=$(top_srcdir) PATH=.:../src:$$PATH \
	RGBA2PPM_TEST=`echo testing` \
	$(SHELL)
