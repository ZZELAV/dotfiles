## Copyright (C) 2020-2021 Aditya Shakya <adi1090x@gmail.com>
## Everyone is permitted to copy and distribute copies of this file under GNU-GPL3

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

;; Global WM Settings

[global/wm]
; Adjust the _NET_WM_STRUT_PARTIAL top value
; Used for top aligned bars
margin-bottom = 0

; Adjust the _NET_WM_STRUT_PARTIAL bottom value
; Used for bottom aligned bars
margin-top = 0

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

;; File Inclusion
; include an external file, like module file, etc.

include-file = ~/.config/i3/polybar/colors
include-file = ~/.config/i3/polybar/modules
include-file = ~/.config/i3/polybar/decor
include-file = ~/.config/i3/polybar/system

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

;; Bar Settings

[bar/main]
; Use either of the following command to list available outputs:
; If unspecified, the application will pick the first one it finds.
; $ polybar -m | cut -d ':' -f 1
; $ xrandr -q | grep " connected" | cut -d ' ' -f1
monitor =

; Use the specified monitor as a fallback if the main one is not found.
monitor-fallback =

; Require the monitor to be in connected state
; XRandR sometimes reports my monitor as being disconnected (when in use)
monitor-strict = false

; Tell the Window Manager not to configure the window.
; Use this to detach the bar if your WM is locking its size/position.
override-redirect = false

; Put the bar at the bottom of the screen
bottom = false

; Prefer fixed center position for the `modules-center` block
; When false, the center position will be based on the size of the other blocks.
fixed-center = true

; Dimension defined as pixel value (e.g. 35) or percentage (e.g. 50%),
; the percentage can optionally be extended with a pixel offset like so:
; 50%:-10, this will result in a width or height of 50% minus 10 pixels
width = 100%
height = 26

; Offset defined as pixel value (e.g. 35) or percentage (e.g. 50%)
; the percentage can optionally be extended with a pixel offset like so:
; 50%:-10, this will result in an offset in the x or y direction 
; of 50% minus 10 pixels
offset-x = 0%
offset-y = 0%

; Background ARGB color (e.g. #f00, #ff992a, #ddff1023)
background = ${color.BG}

; Foreground ARGB color (e.g. #f00, #ff992a, #ddff1023)
foreground = ${color.FG}

; Background gradient (vertical steps)
;   background-[0-9]+ = #aarrggbb
;;background-0 = 

; Value used for drawing rounded corners
; Note: This shouldn't be used together with border-size because the border 
; doesn't get rounded
; Individual top/bottom values can be defined using:
;   radius-{top,bottom}
radius-top = 0.0
radius-bottom = 0.0

; Under-/overline pixel size and argb color
; Individual values can be defined using:
;   {overline,underline}-size
;   {overline,underline}-color
line-size = 2
line-color = ${color.BLUE}

; Values applied to all borders
; Individual side values can be defined using:
;   border-{left,top,right,bottom}-size
;   border-{left,top,right,bottom}-color
; The top and bottom borders are added to the bar height, so the effective
; window height is:
;   height + border-top-size + border-bottom-size
; Meanwhile the effective window width is defined entirely by the width key and
; the border is placed withing this area. So you effectively only have the
; following horizontal space on the bar:
;   width - border-right-size - border-left-size
border-size = 6
border-color = ${color.BG}

; Number of spaces to add at the beginning/end of the bar
; Individual side values can be defined using:
;   padding-{left,right}
padding = 0

; Number of spaces to add before/after each module
; Individual side values can be defined using:
;   module-margin-{left,right}
module-margin-left = 0
module-margin-right = 0

; Fonts are defined using <font-name>;<vertical-offset>
; Font names are specified using a fontconfig pattern.
;   font-0 = "Iosevka Nerd Font:size=10;3"
;   font-1 = MaterialIcons:size=10
;   font-2 = Termsynu:size=8;-1
;   font-3 = FontAwesome:size=10
; See the Fonts wiki page for more details

font-0 = "JetBrains Mono:bold:size=10;3"
font-1 = "Iosevka Nerd Font:size=12;3"
font-2 = "Iosevka Nerd Font:size=15;4"
font-3 = "Iosevka Nerd Font:bold:size=12;4"
font-4 = "archcraft:size=14;4"

; Modules are added to one of the available blocks
;   modules-left = cpu ram
;   modules-center = xwindow xbrightness
;   modules-right = ipc clock

# Default
modules-left = menu dot LD i3 RD dot LD mpd RD sep song
modules-center = 
modules-right = volume dot brightness dot battery dot network dot LD date RD dot sysmenu

# Alternate
;modules-left = openbox 2LD cpu 3LD memory 4LD filesystem 5LD
;modules-center = mpd
;modules-right = 2RD volume 3RD brightness 4RD battery 5RD network 6RD date sep

; The separator will be inserted between the output of each module
separator =

; This value is used to add extra spacing between elements
; @deprecated: This parameter will be removed in an upcoming version
spacing = 0

; Opacity value between 0.0 and 1.0 used on fade in/out
dim-value = 1.0

; Value to be used to set the WM_NAME atom
; If the value is empty or undefined, the atom value
; will be created from the following template: polybar-[BAR]_[MONITOR]
; NOTE: The placeholders are not available for custom values
wm-name = 

; Locale used to localize various module data (e.g. date)
; Expects a valid libc locale, for example: sv_SE.UTF-8
locale = 

; Position of the system tray window
; If empty or undefined, tray support will be disabled
; NOTE: A center aligned tray will cover center aligned modules
;
; Available positions:
;   left
;   center
;   right
;   none
tray-position = right

; If true, the bar will not shift its
; contents when the tray changes
tray-detached = false

; Tray icon max size
tray-maxsize = 16

; DEPRECATED! Since 3.3.0 the tray always uses pseudo-transparency
; Enable pseudo transparency
; Will automatically be enabled if a fully transparent
; background color is defined using `tray-background`
; tray-transparent = false

; Background color for the tray container 
; ARGB color (e.g. #f00, #ff992a, #ddff1023)
; By default the tray container will use the bar
; background color.
tray-background = ${color.BG}

; Tray offset defined as pixel value (e.g. 35) or percentage (e.g. 50%)
tray-offset-x = 0
tray-offset-y = 0

; Pad the sides of each tray icon
tray-padding = 0

; Scale factor for tray clients
tray-scale = 1.0

; Restack the bar window and put it above the
; selected window manager's root
;
; Fixes the issue where the bar is being drawn
; on top of fullscreen window's
;
; Currently supported WM's:
;   bspwm
;   i3 (requires: `override-redirect = true`)
; wm-restack =

; Set a DPI values used when rendering text
; This only affects scalable fonts
; dpi = 

; Enable support for inter-process messaging
; See the Messaging wiki page for more details.
enable-ipc = true

; Fallback click handlers that will be called if
; there's no matching module handler found.
click-left = 
click-middle = 
click-right =
scroll-up =
scroll-down =
double-click-left =
double-click-middle =
double-click-right =

; Requires polybar to be built with xcursor support (xcb-util-cursor)
; Possible values are:
; - default   : The default pointer as before, can also be an empty string (default)
; - pointer   : Typically in the form of a hand
; - ns-resize : Up and down arrows, can be used to indicate scrolling
cursor-click = 
cursor-scroll = 

;; WM Workspace Specific

; bspwm
;;scroll-up = bspwm-desknext
;;scroll-down = bspwm-deskprev
;;scroll-up = bspc desktop -f prev.local
;;scroll-down = bspc desktop -f next.local

;i3
;;scroll-up = i3wm-wsnext
;;scroll-down = i3wm-wsprev
;;scroll-up = i3-msg workspace next_on_output
;;scroll-down = i3-msg workspace prev_on_output

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

;; Application Settings

[settings]
; The throttle settings lets the eventloop swallow up til X events
; if they happen within Y millisecond after first event was received.
; This is done to prevent flood of update event.
;
; For example if 5 modules emit an update event at the same time, we really
; just care about the last one. But if we wait too long for events to swallow
; the bar would appear sluggish so we continue if timeout
; expires or limit is reached.
throttle-output = 5
throttle-output-for = 10

; Time in milliseconds that the input handler will wait between processing events
;throttle-input-for = 30

; Reload upon receiving XCB_RANDR_SCREEN_CHANGE_NOTIFY events
screenchange-reload = false

; Compositing operators
; @see: https://www.cairographics.org/manual/cairo-cairo-t.html#cairo-operator-t
compositing-background = source
compositing-foreground = over
compositing-overline = over
compositing-underline = over
compositing-border = over

; Define fallback values used by all module formats
;format-foreground = 
;format-background = 
;format-underline =
;format-overline =
;format-spacing =
;format-padding =
;format-margin =
;format-offset =

; Enables pseudo-transparency for the bar
; If set to true the bar can be transparent without a compositor.
pseudo-transparency = false

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
;;	    __________  ______
;;	   / ____/ __ \/ ____/
;;	  / __/ / / / / /_    
;;	 / /___/ /_/ / __/    
;;	/_____/\____/_/       
;;
;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

