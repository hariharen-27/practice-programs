use moviesdb;
select *from movies;
SELECT distinct studio FROM movies;
select * from movies where title like "%america%"; -- to select the title with america
select *from movies where studio="";
select * from movies where imdb_rating between 6 and 8;
select *from movies where release_year in ("Marvel Studios",2018,2019);
select * from movies where imdb_rating is null;
select * from movies where imdb_rating is not null;
select * from movies where industry = "bollywood" order by imdb_rating desc;
select * from movies where industry = "bollywood" order by imdb_rating desc limit 5;
select * from movies where industry = "hollywood" order by imdb_rating desc limit 10 offset 1;
select round(avg(imdb_rating),2) as avg_rating from movies where studio="Marvel Studios";
select min(imdb_rating) from movies where studio="Marvel Studios";
select max(imdb_rating) from movies where studio="Marvel Studios";
select count(*) from movies where studio="Marvel Studios";
select round(avg(imdb_rating),2) as avg_rating,min(imdb_rating) as min_rating from movies where studio="Marvel Studios";
select studio, count(*) as count from movies group by studio order by count desc;
select industry, count(*) as count , avg(imdb_rating) as avg_rating from movies group by industry;
select release_year,max(imdb_rating) as max_rating_of_year from movies 
where industry="hollywood" 
group by release_year 
order by release_year desc; -- need to improve in subquery alter


 


