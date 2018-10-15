boolean disk_read_complete = True;

boolean validate ( buffer b )
{
    
}

void dsk_read()
{
    
}

buffer bread ( int fs_no, int blk_no )
{
    buff = getblk(fs_no, blk_no);
    
    if ( validate( buff ) )
      return buff;
  
    dsk_read();
    
    while( !disk_read_complete )
      sleep();
      
    return buff;
}
