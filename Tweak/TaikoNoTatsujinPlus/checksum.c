unsigned long cksum( string filename )
{
    const int	seed		= 0x72ce14c2;
    unsigned long	checksum	= 0, size = 0, f1 = 0, f2 = 0, ctr = 0, shifts = 0, i = 0, byte = 0;
    char		chunk[1024]	= {};
    ifstream	file;
    file.open( filename, ios::in | ios::binary );
    if ( !file.is_open() )
    {
        cout << "Can't open dat¡I" << endl;
        exit( -2 );
    }
    file.seekg( 0, ios::end );
    size = file.tellg();
    if ( size == 0 )
    {
        cout << "Invalid dat" << endl;
        exit( -3 );
    }
    f1	= size ^ seed;
    f2	= 0xfc3e151f;
    file.seekg( 0, ios::beg );
    while ( !file.eof() )
    {
        shifts = (ctr & 0xf) + 5;
        file.read( chunk, 1024 );
        for ( i = 0; i < 1024; i++ )
        {
            byte = (unsigned char) chunk[i];
            if ( (i & 0xf) == 7 )
            {
                byte	<<= ( (i + 15) & 0xf);
                byte	= f1 + byte;
            } else {
                byte	<<= shifts;
                byte	= f1 - byte;
            }
            byte	&= 0xffffffff;
            f1	= byte ^ f2;
            f2	^= seed;
        }
        ctr += 1;
    }
    file.close();
    checksum	= f1 & (~0x80000000);
    checksum	|= (f1 >> 3);
    checksum	&= 0xffffffff;
    return(checksum);
}
