import sys

#print(len(sys.argv))
for i in range(1,len(sys.argv)):
    print("arg ", i, ": ", sys.argv[i])

states = ["California", "Oregon",
          "Washington", "Texas"]

for count, state in enumerate(states):
    print("state ", count, ": ", state)
