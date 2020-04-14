SELECT *
FROM Country
  WHERE CountryID IN (
     SELECT CountryID 
     FROM City 
     GROUP BY CountryID 
     HAVING SUM(Population) >= 100
  )