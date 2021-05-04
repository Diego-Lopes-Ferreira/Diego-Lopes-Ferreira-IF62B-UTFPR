from js
class User():
  'This is a class'
  def __init__(self, id, name, login, password):
    self.id = id
    self.name = name
    self.login = login
    self.password = password


user = User('id', 'name', 'login', 'pwd')
print(user.id)
print(user.name)
print(user.login)
print(user.password)
