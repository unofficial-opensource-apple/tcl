# Tcl Package Index File 1.0
if {![llength [info commands ::tcl::pkgindex]]} {
    proc ::tcl::pkgindex {dir bundle bundlev packages} {
	set allpkgs [list]
	foreach {pkg ver file} $packages {
	    lappend allpkgs [list package require $pkg $ver]
	    package ifneeded $pkg $ver [list source [file join $dir $file]]
	}
	if {$bundle != ""} {
	    lappend allpkgs [list package provide $bundle $bundlev]
	    package ifneeded $bundle $bundlev [join $allpkgs \n]
	}
	return
    }
}
if {![package vsatisfies [package provide Tcl] 8.4]} {return}
::tcl::pkgindex $dir widget::all 1.2 {
    widget			3.0	widget.tcl
    widget::dialog		1.2	dialog.tcl
    widget::menuentry		1.0	mentry.tcl
    widget::panelframe		1.1	panelframe.tcl
    widget::ruler		1.1	ruler.tcl
    widget::screenruler		1.2	ruler.tcl
    widget::scrolledtext	1.0	stext.tcl
    widget::scrolledwindow	1.2	scrollw.tcl
    widget::statusbar		1.2	statusbar.tcl
    widget::superframe		1.0	superframe.tcl
    widget::toolbar		1.2	toolbar.tcl
}
