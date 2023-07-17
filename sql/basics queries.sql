use moviesdb;
select *from movies;
SELECT distinct studio FROM movies;
select * from movies where title like "%america%"; -- to select the title with thor
select *from movies where studio="";
select * from movies where imdb_rating between 6 and 8;
select *from movies where release_year in ("Marvel Studios",2018,2019);
select * from movies where imdb_rating is null;
select * from movies where imdb_rating is not null;
select * from movies where industry = "bollywood" order by imdb_rating desc;
select * from movies where industry = "bollywood" order by imdb_rating desc limit 5;


