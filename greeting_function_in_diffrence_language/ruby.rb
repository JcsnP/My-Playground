#say hi function

def greeting(name)
  var = "Hello " + name
  return var
end

puts("What is your name ?: ")
name = gets

puts(greeting(name))
