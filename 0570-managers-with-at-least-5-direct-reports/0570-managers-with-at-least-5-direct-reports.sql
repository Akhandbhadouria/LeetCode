select name from Employee where id in 
(select managerId  from Employee 
where managerId is NOT NULL 
group by managerId having count(*)>=5)