ostream& operator<<(ostream &os , person p)
{
 os<<"Operator called"<<endl;
 os<<"Person age "<<p.age<<" and Rank "<<p.rank<<endl;
 return os;
}