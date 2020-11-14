status_file = open("/sys/class/power_supply/BAT0/status", "r")
percent_file = open("/sys/class/power_supply/BAT0/capacity", "r")

status = status_file.readline().rstrip('\n')
percent = percent_file.readline().rstrip('\n')

print(f"{status} {percent}%", end="\n", sep="")

status_file.close()
percent_file.close()

