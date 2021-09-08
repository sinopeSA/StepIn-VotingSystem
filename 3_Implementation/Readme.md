#Implementation:
## Structre:
This part for SDLC Phase helps the developer to start the implementation by looking at requirements and architecture followed by test plan.<br/> After implementation one can use this application, below is the process of execution:

## Build And Execute:
1. First goto 3_implementation folder
2. Execute Make command on Termial
3. Navigate to Build folder
4. run votingsystem.out.exe
   
   - Admin Panel:
     - UserName: Admin
     - password: admiN
     - Inititate a new election
     - provide 
       - year [2021]{YYYY format}, 
       - batch [BTCSE]{TTTTT format}, 
       - number of student taking part [55]{Any number}, 
       - and number of candinates [2]{Any number}
       - candidate name [abc,xyz]{Any candidate name}
     - Exit {Logout}
   - Student Panel:
     - Provide
       - Studentid [2021BTCSE00015]{year+Batch+5 digit rollno(prefix zeroes accordinly)}
       - cast vote by choosing the candidate id [1]{candidate id}
       - exit [0] {return}
   - Admin Panel:
     - provide username and password{ Mentioned Above}
     - get result [3] { choose from the options}
     - continue previous election [last]
