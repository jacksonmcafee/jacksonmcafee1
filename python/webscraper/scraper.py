# needed to call get requests
from requests import get

# needed for html parsing
from bs4 import BeautifulSoup

# take input string
link = input("Input Craiglist link here: ")
page = get(link)

# set up BS parser
html_soup = BeautifulSoup(page.text, 'html.parser')

# assign data to posts[]
posts = html_soup.find_all('li', class_= 'result-row')

# store price for first listing
post_one = posts[0]
post_one_price = post_one.a.text
post_one_price.strip()

post_one_time = post_one.find('time', class_= 'result-date')
post_one_datetime = post_one_time['datetime']
post_one_title = post_one_time['title']

#title is a and that class, link is grabbing the href attribute of that variable
post_one_title = post_one.find('a', class_='result-title hdrlnk')
post_one_link = post_one_title['href']

#easy to grab the post title by taking the text element of the title variable
post_one_title_text = post_one_title.text

post_one_num_bedrooms = post_one.find('span', class_ = 'housing').text.split()[0]

post_one_sqft = post_one.find('span', class_ = 'housing').text.split()[2][:-3] #cleans the ft2 at the end

post_one_hood = posts[0].find('span', class_='result-hood').text #grabs the neighborhood, this is the problem column that requires
#a lot of cleaning and figuring out later.