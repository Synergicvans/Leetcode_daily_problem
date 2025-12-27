SELECT today.id
FROM Weather yesterday 
JOIN Weather today

on DATEDIFF(today.recordDate,yesterday.recordDate) = 1
    AND today.temperature > yesterday.temperature
;