## Copyright (C) 2020-2021 Aditya Shakya <adi1090x@gmail.com>
## Everyone is permitted to copy and distribute copies of this file under GNU-GPL3

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/backlight]
type = internal/xbacklight

; Use the following command to list available cards:
; $ ls -1 /sys/class/backlight/
card = intel_backlight

; Available tags:
;   <label> (default)
;   <ramp>
;   <bar>
format = <ramp> <label>

; Available tokens:
;   %percentage% (default)
label = %percentage%%

; Only applies if <ramp> is used

ramp-0 = 
ramp-1 = 
ramp-2 = 
ramp-3 = 
ramp-4 = 
ramp-5 = 
ramp-6 = 
ramp-7 = 
ramp-8 = 
ramp-9 = 
ramp-font = 2
ramp-foreground = ${color.CYAN}

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/brightness]
type = internal/backlight

; Use the following command to list available cards:
; $ ls -1 /sys/class/backlight/
card = ${system.graphics_card}

enable-scroll = true

; Available tags:
;   <label> (default)
;   <ramp>
;   <bar>
format = <ramp> <label>

; Available tokens:
;   %percentage% (default)
label = %percentage%%

; Only applies if <ramp> is used

ramp-0 = 
ramp-1 = 
ramp-2 = 
ramp-3 = 
ramp-4 = 
ramp-5 = 
ramp-6 = 
ramp-7 = 
ramp-8 = 
ramp-9 = 
ramp-font = 2
ramp-foreground = ${color.CYAN}

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/battery]
type = internal/battery

; This is useful in case the battery never reports 100% charge
full-at = 99

; Use the following command to list batteries and adapters:
; $ ls -1 /sys/class/power_supply/
battery = BAT0
adapter = AC

; If an inotify event haven't been reported in this many
; seconds, manually poll for new values.
;
; Needed as a fallback for systems that don't report events
; on sysfs/procfs.
;
; Disable polling by setting the interval to 0.
;
; Default: 5
poll-interval = 2

; see "man date" for details on how to format the time string
; NOTE: if you want to use syntax tags here you need to use %%{...}
; Default: %H:%M:%S
time-format = %H:%M

; Available tags:
;   <label-charging> (default)
;   <bar-capacity>
;   <ramp-capacity>
;   <animation-charging>
format-charging = <animation-charging> <label-charging>
format-charging-prefix = " "
format-charging-prefix-font = 1
format-charging-prefix-foreground = ${color.RED}

; Available tags:
;   <label-discharging> (default)
;   <bar-capacity>
;   <ramp-capacity>
;   <animation-discharging>
format-discharging = <ramp-capacity> <label-discharging>

; Available tags:
;   <label-full> (default)
;   <bar-capacity>
;   <ramp-capacity>
;format-full = <ramp-capacity> <label-full>

; Available tokens:
;   %percentage% (default)
;   %time%
;   %consumption% (shows current charge rate in watts)

label-charging = %percentage%%

; Available tokens:
;   %percentage% (default)
;   %time%
;   %consumption% (shows current discharge rate in watts)
label-discharging = %percentage%%

; Available tokens:
;   %percentage% (default)
format-full = <label-full>
format-full-prefix = " "
format-full-prefix-font = 2
format-full-prefix-foreground = ${color.RED}
label-full = %percentage%%

; Only applies if <ramp-capacity> is used
ramp-capacity-0 = 
ramp-capacity-1 = 
ramp-capacity-2 = 
ramp-capacity-3 = 
ramp-capacity-4 = 
ramp-capacity-foreground = ${color.YELLOW}
ramp-capacity-font = 2

; Only applies if <animation-charging> is used
animation-charging-0 = 
animation-charging-1 = 
animation-charging-2 = 
animation-charging-3 = 
animation-charging-4 = 
animation-charging-foreground = ${color.GREEN}
animation-charging-font = 2
animation-charging-framerate = 700

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/i3]
type = internal/i3

; Only show workspaces defined on the same output as the bar
;
; Useful if you want to show monitor specific workspaces
; on different bars
;
; Default: false
pin-workspaces = true

; This will split the workspace name on ':'
; Default: false
strip-wsnumbers = true

; Sort the workspaces by index instead of the default
; sorting that groups the workspaces by output
; Default: false
index-sort = true

; Create click handler used to focus workspace
; Default: true
enable-click = true

; Create scroll handlers used to cycle workspaces
; Default: true
enable-scroll = true

; Wrap around when reaching the first/last workspace
; Default: true
wrapping-scroll = false

; Set the scroll cycle direction 
; Default: true
reverse-scroll = false

; Use fuzzy (partial) matching on labels when assigning 
; icons to workspaces
; Example: code;♚ will apply the icon to all workspaces 
; containing 'code' in the label
; Default: false
fuzzy-match = true

; ws-icon-[0-9]+ = label;icon
; NOTE: The label needs to match the name of the i3 workspace
ws-icon-0 = 1;
ws-icon-1 = 2;
ws-icon-2 = 3;
ws-icon-3 = 4;
ws-icon-4 = 5;
ws-icon-5 = 6;漣
ws-icon-6 = 7;
ws-icon-7 = 8;
ws-icon-8 = 9;
ws-icon-9 = 10;ﳴ
ws-icon-default = 
; NOTE: You cannot skip icons, e.g. to get a ws-icon-6
; you must also define a ws-icon-5.

; Available tags:
;   <label-state> (default) - gets replaced with <label-(focused|unfocused|visible|urgent)>
;   <label-mode> (default)
format = <label-state><label-mode>
format-background = ${color.BGL}

; Available tokens:
;   %mode%
; Default: %mode%
label-mode = %mode%
label-mode-padding = 1
label-mode-background = ${color.YELLOW}
label-mode-foreground = ${color.BGL}

; Available tokens:
;   %name%
;   %icon%
;   %index%
;   %output%
; Default: %icon%  %name%
label-focused = %icon%
label-focused-foreground = ${color.BGL}
label-focused-background = ${color.BLUE}

; Available tokens:
;   %name%
;   %icon%
;   %index%
;   %output%
; Default: %icon%  %name%
label-unfocused = %icon%
label-unfocused-foreground = ${color.FG}
label-unfocused-background = ${color.BGL}

; Available tokens:
;   %name%
;   %icon%
;   %index%
;   %output%
; Default: %icon%  %name%
label-visible = %icon%
label-visible-foreground = ${color.BGL}
label-visible-background = ${color.GREEN}

; Available tokens:
;   %name%
;   %icon%
;   %index%
;   %output%
; Default: %icon%  %name%
label-urgent = %icon%
label-urgent-foreground = ${color.BGL}
label-urgent-background = ${color.RED}

; Paddings
label-focused-padding = 1
label-unfocused-padding = 1
label-visible-padding = 1
label-urgent-padding = 1

; Separator in between workspaces
label-separator = |
label-separator-padding = 0
label-separator-foreground = ${color.BGL}
label-separator-background = ${color.BGL}

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/cpu]
type = internal/cpu

; Seconds to sleep between updates
; Default: 1
interval = 1

; Available tags:
;   <label> (default)
;   <bar-load>
;   <ramp-load>
;   <ramp-coreload>
;;format = <label> <ramp-coreload>
format = <label>
format-prefix = 
format-prefix-font = 2
format-prefix-foreground = ${color.YELLOW}

; Available tokens:
;   %percentage% (default) - total cpu load averaged over all cores
;   %percentage-sum% - Cumulative load on all cores
;   %percentage-cores% - load percentage for each core
;   %percentage-core[1-9]% - load percentage for specific core
label = " %percentage%%"

; Spacing between individual per-core ramps
;;ramp-coreload-spacing = 1
;;ramp-coreload-0 = 
;;ramp-coreload-1 = 
;;ramp-coreload-2 = 
;;ramp-coreload-3 = 
;;ramp-coreload-4 = 

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/date]
type = internal/date

; Seconds to sleep between updates
interval = 1.0

; See "http://en.cppreference.com/w/cpp/io/manip/put_time" for details on how to format the date string
; NOTE: if you want to use syntax tags here you need to use %%{...}
;;date = %Y-%m-%d%

; Optional time format
time = %I:%M %p

; if `date-alt` or `time-alt` is defined, clicking
; the module will toggle between formats
;;date-alt = %A, %d %B %Y
#time-alt = %d/%m/%Y%
time-alt = %b %d, %G

; Available tags:
;   <label> (default)

format = <label>
format-prefix = "   "
format-prefix-font = 2
format-prefix-foreground = ${color.CYAN}
format-background = ${color.BGL}

; Available tokens:
;   %date%
;   %time%
; Default: %date%
label = "%time%  " 
label-font = 4
label-foreground = ${color.CYAN}

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/filesystem]
type = internal/fs

; Mountpoints to display
mount-0 = /
;;mount-1 = /home
;;mount-2 = /var

; Seconds to sleep between updates
; Default: 30
interval = 10

; Display fixed precision values
; Default: false
fixed-values = true

; Spacing between entries
; Default: 2
;;spacing = 4

; Available tags:
;   <label-mounted> (default)
;   <bar-free>
;   <bar-used>
;   <ramp-capacity>
format-mounted = <label-mounted>

format-mounted-prefix = 
format-mounted-prefix-font = 2
format-mounted-prefix-foreground = ${color.PURPLE}

; Available tags:
;   <label-unmounted> (default)
format-unmounted = <label-unmounted>

format-unmounted-prefix = 
format-unmounted-prefix-font = 2
format-unmounted-prefix-foreground = ${color.PURPLE}

; Available tokens:
;   %mountpoint%
;   %type%
;   %fsname%
;   %percentage_free%
;   %percentage_used%
;   %total%
;   %free%
;   %used%
; Default: %mountpoint% %percentage_free%%
label-mounted = " %used% / %free%"

; Available tokens:
;   %mountpoint%
; Default: %mountpoint% is not mounted
label-unmounted = " %mountpoint%: NM"

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/memory]
type = internal/memory

; Seconds to sleep between updates
; Default: 1
interval = 1

; Available tags:
;   <label> (default)
;   <bar-used>
;   <bar-free>
;   <ramp-used>
;   <ramp-free>
;   <bar-swap-used>
;   <bar-swap-free>
;   <ramp-swap-used>
;   <ramp-swap-free>
format = <label>

format-prefix = 
format-prefix-font = 2
format-prefix-foreground = ${color.CYAN}

; Available tokens:
;   %percentage_used% (default)
;   %percentage_free%
;   %gb_used%
;   %gb_free%
;   %gb_total%
;   %mb_used%
;   %mb_free%
;   %mb_total%
;   %percentage_swap_used%
;   %percentage_swap_free%
;   %mb_swap_total%
;   %mb_swap_free%
;   %mb_swap_used%
;   %gb_swap_total%
;   %gb_swap_free%
;   %gb_swap_used%

label = " %mb_used%"

; Only applies if <ramp-used> is used
;;ramp-used-0 = 
;;ramp-used-1 = 
;;ramp-used-2 = 
;;ramp-used-3 = 
;;ramp-used-4 = 

; Only applies if <ramp-free> is used
;;ramp-free-0 = 
;;ramp-free-1 = 
;;ramp-free-2 = 
;;ramp-free-3 = 
;;ramp-free-4 = 

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/mpd]
type = internal/mpd

; Host where mpd is running (either ip or domain name)
; Can also be the full path to a unix socket where mpd is running.
;;host = 127.0.0.1
;;port = 6600
;;password = mysecretpassword

; Seconds to sleep between progressbar/song timer sync
; Default: 1
interval = 2

; Available tags:
;   <label-song> (default)
;   <label-time>
;   <bar-progress>
;   <toggle> - gets replaced with <icon-(pause|play)>
;   <toggle-stop> - gets replaced with <icon-(stop|play)>
;   <icon-random>
;   <icon-repeat>
;   <icon-repeatone> (deprecated)
;   <icon-single> - Toggle playing only a single song. Replaces <icon-repeatone>
;   <icon-consume>
;   <icon-prev>
;   <icon-stop>
;   <icon-play>
;   <icon-pause>
;   <icon-next>
;   <icon-seekb>
;   <icon-seekf>

format-online = <icon-prev> <toggle> <icon-next>
;;format-online-prefix = " "
;;format-online-prefix-font = 2
;;format-online-prefix-foreground = ${color.GREEN}
format-online-background = ${color.BGL}

format-playing = ${self.format-online}
format-paused = ${self.format-online}
format-stopped = ${self.format-online}

; Available tags:
;   <label-offline>
format-offline = <label-offline>
format-offline-prefix = " "
format-offline-background = ${color.BGL}

; Available tokens:
;   %artist%
;   %album-artist%
;   %album%
;   %date%
;   %title%
; Default: %artist% - %title%
label-song =  "%artist% - %title%"
label-song-maxlen = 25
label-song-ellipsis = true

; Available tokens:
;   %elapsed%
;   %total%
; Default: %elapsed% / %total%
;;abel-time = %elapsed% / %total%

; Available tokens:
;   None
label-offline = "Offline"

; Only applies if <icon-X> is used
icon-play = 
icon-play-font = 2
icon-play-foreground = ${color.GREEN}
icon-pause = 
icon-pause-font = 2
icon-pause-foreground = ${color.RED}
icon-stop = 
icon-stop-foreground = ${color.RED}
icon-prev = 玲
icon-prev-font = 1
icon-prev-foreground = ${color.CYAN}
icon-next = 怜
icon-next-font = 1
icon-next-foreground = ${color.CYAN}

; Used to display the state of random/repeat/repeatone/single
; Only applies if <icon-[random|repeat|repeatone|single]> is used
;;toggle-on-foreground = #ff
;;toggle-off-foreground = #55

;;-----------

[module/song]
type = internal/mpd

interval = 2

format-online = <label-song>

format-playing = ${self.format-online}
format-paused = ${self.format-online}
format-stopped = ${self.format-online}

label-song =  "%artist% - %title%"
label-song-maxlen = 25
label-song-ellipsis = true

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

; If you use both a wired and a wireless network, just add 2 module definitions. For example
;[module/wired-network]
;type = internal/network
;interface = ${system.network_interface}

;[module/wireless-network]
;type = internal/network
;interface = ${system.network_interface}

; Normal Module
[module/network]
type = internal/network
interface = enp0s3

; Seconds to sleep between updates
; Default: 1
interval = 1.0

; Test connectivity every Nth update
; A value of 0 disables the feature
; NOTE: Experimental (needs more testing)
; Default: 0
;ping-interval = 3

; @deprecated: Define min width using token specifiers (%downspeed:min% and %upspeed:min%)
; Minimum output width of upload/download rate
; Default: 3
;;udspeed-minwidth = 5

; Accumulate values from all interfaces
; when querying for up/downspeed rate
; Default: false
accumulate-stats = true

; Consider an `UNKNOWN` interface state as up.
; Some devices have an unknown state, even when they're running
; Default: false
unknown-as-up = true

; Available tags:
;   <label-connected> (default)
;   <ramp-signal>
format-connected = <ramp-signal> <label-connected>

; Available tags:
;   <label-disconnected> (default)

format-disconnected = <label-disconnected>
format-disconnected-prefix = "睊 "
format-disconnected-prefix-font = 2
format-disconnected-foreground = ${color.FGA}

; Available tags:
;   <label-connected> (default)
;   <label-packetloss>
;   <animation-packetloss>
;;format-packetloss = <animation-packetloss> <label-connected>

; Available tokens:
;   %ifname%    [wireless+wired]
;   %local_ip%  [wireless+wired]
;   %local_ip6% [wireless+wired]
;   %essid%     [wireless]
;   %signal%    [wireless]
;   %upspeed%   [wireless+wired]
;   %downspeed% [wireless+wired]
;   %linkspeed% [wired]
; Default: %ifname% %local_ip%
label-connected = "%local_ip%   %downspeed%"
;label-connected = "%{A1:~/.config/i3/rofi/bin/network_menu &:}%essid%%{A}"

; Available tokens:
;   %ifname%    [wireless+wired]
; Default: (none)
label-disconnected = "%{A1:~/.config/i3/rofi/bin/network_menu &:}Offline%{A}"

; Available tokens:
;   %ifname%    [wireless+wired]
;   %local_ip%  [wireless+wired]
;   %local_ip6% [wireless+wired]
;   %essid%     [wireless]
;   %signal%    [wireless]
;   %upspeed%   [wireless+wired]
;   %downspeed% [wireless+wired]
;   %linkspeed% [wired]
; Default: (none)
;label-packetloss = %essid%
;label-packetloss-foreground = #eefafafa

; Only applies if <ramp-signal> is used
ramp-signal-0 = 
ramp-signal-1 = 
ramp-signal-2 = 
ramp-signal-3 = 
ramp-signal-4 = 
ramp-signal-foreground = ${color.PURPLE}
ramp-signal-font = 2

; Only applies if <animation-packetloss> is used
;;animation-packetloss-0 = ⚠
;;animation-packetloss-0-foreground = #ffa64c
;;animation-packetloss-1 = ⚠
;;animation-packetloss-1-foreground = #000000
; Framerate in milliseconds
;;animation-packetloss-framerate = 500

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/volume]
type = internal/pulseaudio

; Sink to be used, if it exists (find using `pacmd list-sinks`, name field)
; If not, uses default sink
sink = alsa_output.pci-0000_12_00.3.analog-stereo

; Use PA_VOLUME_UI_MAX (~153%) if true, or PA_VOLUME_NORM (100%) if false
; Default: true
use-ui-max = false

; Interval for volume increase/decrease (in percent points)
; Default: 5
interval = 5

; Available tags:
;   <label-volume> (default)
;   <ramp-volume>
;   <bar-volume>
format-volume = <ramp-volume> <bar-volume>

; Available tags:
;   <label-muted> (default)
;   <ramp-volume>
;   <bar-volume>
format-muted = <label-muted>
format-muted-prefix = 
format-muted-prefix-font = 2

; Available tokens:
;   %percentage% (default)
;label-volume = %percentage%%

; Available tokens:
;   %percentage% (default)
label-muted = " Mute"
label-muted-foreground = ${color.FGA}

; Only applies if <bar-volume> is used
bar-volume-width = 10
bar-volume-gradient = false

bar-volume-indicator = 雷
bar-volume-indicator-font = 2
bar-volume-indicator-foreground = ${color.BLUE}

bar-volume-fill = 絛
bar-volume-fill-font = 3
bar-volume-foreground-0 = ${color.BLUE}
bar-volume-foreground-1 = ${color.BLUE}
bar-volume-foreground-2 = ${color.BLUE}
bar-volume-foreground-3 = ${color.BLUE}
bar-volume-foreground-4 = ${color.BLUE}

bar-volume-empty = 絛
bar-volume-empty-font = 3
bar-volume-empty-foreground = ${color.BGL}

; Only applies if <ramp-volume> is used
ramp-volume-0 = 
ramp-volume-1 = 
ramp-volume-2 = 
ramp-volume-3 = 
ramp-volume-4 = 
ramp-volume-5 = 
ramp-volume-6 = 
ramp-volume-7 = 
ramp-volume-8 = 
ramp-volume-9 = 
ramp-volume-font = 2
ramp-volume-foreground = ${color.BLUE}

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/temperature]
type = internal/temperature

; Seconds to sleep between updates
; Default: 1
interval = 0.5

; Thermal zone to use
; To list all the zone types, run 
; $ for i in /sys/class/thermal/thermal_zone*; do echo "$i: $(<$i/type)"; done
; Default: 0
thermal-zone = 0

; Full path of temperature sysfs path
; Use `sensors` to find preferred temperature source, then run
; $ for i in /sys/class/hwmon/hwmon*/temp*_input; do echo "$(<$(dirname $i)/name): $(cat ${i%_*}_label 2>/dev/null || echo $(basename ${i%_*})) $(readlink -f $i)"; done
; to find path to desired file
; Default reverts to thermal zone setting
;;hwmon-path = /sys/devices/platform/coretemp.0/hwmon/hwmon2/temp1_input

; Threshold temperature to display warning label (in degrees celsius)
; Default: 80
warn-temperature = 60

; Whether or not to show units next to the temperature tokens (°C, °F)
; Default: true
units = true

; Available tags:
;   <label> (default)
;   <ramp>
format = <ramp> <label>

; Available tags:
;   <label-warn> (default)
;   <ramp>
format-warn = <ramp> <label-warn>

; Available tokens:
;   %temperature% (deprecated)
;   %temperature-c%   (default, temperature in °C)
;   %temperature-f%   (temperature in °F)
label = %temperature-c%

; Available tokens:
;   %temperature% (deprecated)
;   %temperature-c%   (default, temperature in °C)
;   %temperature-f%   (temperature in °F)
label-warn = "%temperature-c%"
label-warn-foreground = ${color.RED}

; Requires the <ramp> tag
; The icon selection will range from 0 to `warn-temperature`
; with the current temperature as index.
ramp-0 = 
ramp-1 = 
ramp-2 = 
ramp-3 = 
ramp-4 = 
ramp-5 = 
ramp-6 = 
ramp-7 = 
ramp-8 = 
ramp-9 = 
ramp-font = 2
ramp-foreground = ${color.YELLOW}
;;ramp-foreground = #55

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/menu]
type = custom/text

content = " "
content-font = 5
;content = " "
;content-font = 3
content-foreground = ${color.GREEN}
content-padding = 0

click-left = ~/.config/i3/rofi/bin/launcher
;;click-middle = path_to_script
;;click-right = path_to_script

;;scroll-up = path_to_script
;;scroll-down = path_to_script

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

[module/sysmenu]
type = custom/text

content = " "
content-font = 3
content-foreground = ${color.RED}
content-padding = 0

click-left = ~/.config/i3/rofi/bin/powermenu

;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
;;	    __________  ______
;;	   / ____/ __ \/ ____/
;;	  / __/ / / / / /_    
;;	 / /___/ /_/ / __/    
;;	/_____/\____/_/       
;;
;; _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
