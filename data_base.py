import time

for x in range(1):
    print("Please Wait While I Fetch The Registration Info...")
    time.sleep(5)

First_Name = input("Please Enter Your First Name:")
Last_Name = input("Please Enter Your Last Name:")
Age = input("Please Enter Your Date of Birth  MM/DD/YYYY:")
Username = input("Please Enter Your Prefered Username:")
for i in range(1):
    print("Adding to the Data Base, Please Wait...")
    time.sleep(5)
    print("Hello", Username, "Welocme To The Oasis.")
