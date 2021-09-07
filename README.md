# StepIn-VotingSystem

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/87401b88cabc4226bb7154a90b203671)](https://app.codacy.com/gh/sinopeSA/StepIn-VotingSystem?utm_source=github.com&utm_medium=referral&utm_content=sinopeSA/StepIn-VotingSystem&utm_campaign=Badge_Grade_Settings)

A command line based voting system that can be used for various purpose and at various Educational Institutes<br/>
# Build And Execute:
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
  

# Badges