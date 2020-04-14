FROM Country
  WHERE CountryID NOT IN (
     SELECT CountryID
FROM City
     INNER JOIN Building ON City.CityID = Building.CityID
  )