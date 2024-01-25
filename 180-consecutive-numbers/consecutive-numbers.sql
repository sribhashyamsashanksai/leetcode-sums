select distinct num as ConsecutiveNums 
from logs where (id+1, num) in 
(select id, num from logs 
 where (id+1, num) in 
 (select id, num from logs)
)