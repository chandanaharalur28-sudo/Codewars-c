int same_case (char a, char b)
{
  if (!isalpha(a)|| !isalpha(b))
    {
      return -1;
    }
  else if(isupper(a) && isupper(b))
    {
    return 1;
  }
  else if(islower(a) && islower(b))
    {return 1;
    }
  else
	  return 0;
}
