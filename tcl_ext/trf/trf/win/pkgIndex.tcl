# Tcl package index file, version 1.0
#
# Window package index for Trf 2.1p2 (as of AUG-26-2002)
#

proc trfifneeded dir {
    rename trfifneeded {}
    if {[package vcompare [info tclversion] 8.1] >= 0} {
	set version {}
    } else {
	regsub {\.} [info tclversion] {} version
    }
    package ifneeded Trf 2.1 "load [list [file join $dir trf21$version.dll]] Trf"
}
trfifneeded $dir
