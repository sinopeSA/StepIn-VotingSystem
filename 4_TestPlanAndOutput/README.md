# TEST PLAN AND TEST OUTCOMES
## HIGH LEVEL TEST PLAN:
|TEST ID|TEST TYPE|TEST DESCRIPTION|TEST I/P|EXP O/P|ACTUAL O/P|TEST RESULT|
|-----|-----------|-------------------------|-----------|------------|----------|---------|
|TS-1.1|Case based| Admin Login| USERNAME: Admin <br/> Password: admiN| LOGGED IN SUCCESSFULLY | LOGGED IN SUCCESSFULLY |PASS|
|TS-1.2|Case based| Admin Login| USERNAME: ABCD <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|TS-1.3|Case based| Admin Login| USERNAME: Admin <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|TS-1.4|Case based| Admin Login| USERNAME: 1234 <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|TS-2.1|Case based| Add New ELection| Year: 1900 <br/> Branch code: xyz <br/> Max students: 55 <br/> number of Candidates:2 <br/>candaiate names: "123","456"| Wrong Year | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |FAIL|
|TS-2.2|Case based| Add New ELection| Year: 2021 <br/> Branch code: CSE <br/> Max students: 50 <br/> number of Candidates:0| No candiates found for the given Election | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |FAIL|
|TS-2.3|Case based| Add New ELection| Year: 2021 <br/> Branch code: CSE <br/> Max students: 55 <br/> number of Candidates:2 <br/>candaiate names: "QWERTY","ASDF"| Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully  | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |PASS|
|TS-3.1|Case based| Student Panel| UserID: 2021BTCSE00015  <br/>your vote: 1| Thanks for your Precious Vote. | Thanks for your Precious Vote. |PASS|
|TS-3.2|Case based| Student Panel| UserID: 2021BTCSE00016  <br/>your vote: x| invalid Input | Thanks for your Precious Vote. |FAIL|
|TS-3.3|Case based| Student Panel| UserID: 2021BTCSE00016  <br/>your vote: 0| Ivalid Vote. Try Again | Ivalid Vote. Try Again |PASS|
|TS-3.4|Case based| Student Panel| UserID: 2021BTCSE00|  Try Again, Enter user Id | Try Again  Enter user Id |PASS|
|TS-3.4|Case based| Student Panel| UserID: 2021BTCSE00020 <br/> your Vote: "NONE" |Count as dummy votes: Wasted| Try Again  Enter user Id |FAIL|
|TS-4.1|Case based| Result| Option:3| "DISPLAYS THE RESULT" | "DISPLAYS THE RESULT" |PASS|




