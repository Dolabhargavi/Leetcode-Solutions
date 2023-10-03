# Write your MySQL query statement below
select Prices.product_id,ifnull(round(sum(price*units)/sum(units),2),0) as average_price from prices left join UnitsSold on prices.product_id=unitssold.product_id and unitssold.purchase_date>=prices.start_date and unitssold.purchase_date<=prices.end_date group by Prices.product_id;

