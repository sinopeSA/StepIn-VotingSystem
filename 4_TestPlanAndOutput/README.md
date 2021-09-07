# TEST PLAN AND TEST OUTCOMES

## HIGH LEVEL TEST PLAN:
|TEST ID|TEST TYPE|TEST DESCRIPTION|TEST I/P|EXP O/P|ACTUAL O/P|TEST RESULT|
|---------|-----------|-------------------------|-----------|------------|----------|-------|
|HTS-1.1|Case based| Admin Login| USERNAME: Admin <br/> Password: admiN| LOGGED IN SUCCESSFULLY | LOGGED IN SUCCESSFULLY |PASS|
|HTS-1.2|Case based| Admin Login| USERNAME: ABCD <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|HTS-1.3|Case based| Admin Login| USERNAME: Admin <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|HTS-1.4|Case based| Admin Login| USERNAME: 1234 <br/> Password: admin| Wrong Username or Password | Wrong Username or Password |PASS|
|HTS-2.1|Case based| Add New ELection| Year: 1900 <br/> Branch code: xyz <br/> Max students: 55 <br/> number of Candidates:2 <br/>candaiate names: "123","456"| Wrong Year | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |FAIL|
|HTS-2.2|Case based| Add New ELection| Year: 2021 <br/> Branch code: CSE <br/> Max students: 50 <br/> number of Candidates:0| No candiates found for the given Election | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |FAIL|
|HTS-2.3|Case based| Add New ELection| Year: 2021 <br/> Branch code: CSE <br/> Max students: 55 <br/> number of Candidates:2 <br/>candaiate names: "QWERTY","ASDF"| Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully  | Saving Election Info in File...<br/> Saved Successfully : )<br/> Creating candidate files...<br/> Created Files successfully |PASS|
|HTS-3.1|Case based| Student Panel| UserID: 2021BTCSE00015  <br/>your vote: 1| Thanks for your Precious Vote. | Thanks for your Precious Vote. |PASS|
|HTS-3.2|Case based| Student Panel| UserID: 2021BTCSE00016  <br/>your vote: x| invalid Input | Thanks for your Precious Vote. |FAIL|
|HTS-3.3|Case based| Student Panel| UserID: 2021BTCSE00016  <br/>your vote: 0| Ivalid Vote. Try Again | Ivalid Vote. Try Again |PASS|
|HTS-3.4|Case based| Student Panel| UserID: 2021BTCSE00|  Try Again, Enter user Id | Try Again  Enter user Id |PASS|
|HTS-3.4|Case based| Student Panel| UserID: 2021BTCSE00020 <br/> your Vote: "NONE" |Count as dummy votes: Wasted| Try Again  Enter user Id |FAIL|
|HTS-4.1|Case based| Result| Option:3| "DISPLAYS THE RESULT" | "DISPLAYS THE RESULT" |PASS|


## LOW LEVEL TEST PLAN:
|TEST ID|TEST TYPE|TEST DESCRIPTION|TEST I/P|EXP O/P|ACTUAL O/P|TEST RESULT|
|---------|-----------|-------------------------|-----------|------------|----------|-------|
|LTS-1.1|Function based| isAdmin| USERNAME: Admin <br/> Password: admiN| BOOLEAN: 1 | BOOLEAN: 1 |PASS|
|LTS-1.2|Function based| isAdmin| USERNAME: Admin <br/> Password: admin| BOOLEAN: 0 | BOOLEAN: 0 |PASS|
|LTS-2.1|Function based| extractyear| Student user id: 2021BTCSE00015 | INT: 2021 | INT: 2021 |PASS|
|LTS-2.2|Function based| extractyear| Student user id: 20BTCSE0000015 | INT: 0 | INT: 20 |FAIL|
|LTS-2.3|Function based| extractBranchCode| Student user id: 2021BTCSE00015 | BOOLEAN: 1 | BOOLEAN: 1 | PASS |
|LTS-2.4|Function based| extractBranchCode| Student user id: 20BTCSE0000015 | BOOLEAN: 0 | BOOLEAN: 0 | PASS |
|LTS-2.5|Function based| extractid| Student user id: 2021BTCSE00015 | INT: 15 | INT: 15 | PASS |
|LTS-2.6|Function based| extractid| Student user id: 20BTCSE0000015 | BOOLEAN: 1 | BOOLEAN: 1 | PASS |
|LTS-2.7|Function based| isValid| Student user id: 20BTCSE0000015 | BOOLEAN: 0 | BOOLEAN: 0 | PASS |
|LTS-3.1|Function based| getWinner| -- | INT: WinnerId | INT: WinnerId | PASS |
|LTS-3.2|Function based| getWinner| -- | INT: -1 | INT: -1 | PASS |
|LTS-4.1|Function based| AdminPanel | 2 | Admin panel View | Admin panel View | PASS |
|LTS-4.2|Function based| StudnentPanel| 1 | Student Panel View | Student Panel View | PASS |