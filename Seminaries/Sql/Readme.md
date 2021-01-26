# A Taste of SQL - CS50's New Year's Seminars 2021



```sql
SELECT * FROM shows WHERE title = 'Stranger Things';
SELECT  genre FROM genres WHERE show_id = 4574334;

SELECT  genre FROM genres WHERE show_id = 
   ...> (SELECT id from shows WHERE title = 'Stranger Things' AND year = 2016);
```

```sql
SELECT * FROM shows WHERE title = 'The Office' ORDER BY episodes;
SELECT * FROM shows WHERE title = 'The Office' ORDER BY episodes DESC;
```
