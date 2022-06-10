we iterate through path if we find '/' we ignore otherwise we construct temp string to store the folder name or '..' or '.' .
we construct temp until we find other '/' ..
if temp == '..' we need to go one folder up so we pop last folder from stack other wise we if temp == '.' we do nothing otherwise( it is folder name) push it to stack.
then we form ans from the stack