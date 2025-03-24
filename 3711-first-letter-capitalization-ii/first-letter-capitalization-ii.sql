-- Write your PostgreSQL query statement below
select content_id,content_text original_text,initcap(content_text) converted_text
from user_content