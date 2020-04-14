SELECT Name
FROM Building AS bd
   INNER JOIN
   City AS ct
   ON ct.CityID = bd.CityID
   INNER JOIN
   Country AS cn
   ON ct.CountryID = cn.CountryID
   WHERE cn.Name IS 'Poland'
