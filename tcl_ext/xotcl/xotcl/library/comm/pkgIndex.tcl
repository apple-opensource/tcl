# Tcl package index file, version 1.1
# This file is generated by the "pkg_mkIndex -direct" command
# and sourced either when an application starts up or
# by a "package unknown" script.  It invokes the
# "package ifneeded" command to set up package-related
# information so that packages will be loaded automatically
# in response to "package require" commands.  When this
# script is sourced, the variable $dir must contain the
# full path name of this file's directory.

package ifneeded xotcl::comm::connection 1.0 [list source [file join $dir Connection.xotcl]]
package ifneeded xotcl::comm::dav 0.9 [list source [file join $dir Dav.xotcl]]
package ifneeded xotcl::comm::ftp 0.9 [list source [file join $dir Ftp.xotcl]]
package ifneeded xotcl::comm::httpAccess 0.91 [list source [file join $dir Access.xotcl]]
package ifneeded xotcl::comm::httpd 1.1 [list source [file join $dir Httpd.xotcl]]
package ifneeded xotcl::comm::imap 0.9 [list source [file join $dir Imap.xotcl]]
package ifneeded xotcl::comm::ldap 0.9 [list source [file join $dir Ldap.xotcl]]
package ifneeded xotcl::comm::mime 0.9 [list source [file join $dir Mime.xotcl]]
package ifneeded xotcl::comm::pcache 0.9 [list source [file join $dir PCache.xotcl]]
