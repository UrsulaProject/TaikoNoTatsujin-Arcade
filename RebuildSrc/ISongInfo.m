#import "ISongInfo.h"
@implementation ISongInfo
- (void)setupWithTaikoMusicData:(NSString*)Path{
	NSData* MappedFile=[NSData dataWithContentsOfMappedFile:Path];
char* MD=[MappedFile subdataWithRange:NSMakeRange(0,80)].bytes;
self->m_Genre=(char*)(MD+2);
self->m_CourseDifficulties[0]=(int)(MD+8);
self->m_CourseDifficulties[1]=(int)(MD+9);
self->m_CourseDifficulties[2]=(int)(MD+10);
self->m_CourseDifficulties[3]=(int)(MD+11);
self->m_Title=[NSString stringWithCString:[MD subdataWithRange:(NSRange)(MD+12)] encoding:4];
self->m_MusicDataOffset=(int)(MD+5);
self->m_MusicDataLength=(int)(MD+6);
self->m_ScoreDataOffset[0]=(int)(MD+7);
self->m_ScoreDataLength[0]=(int)(MD+8);
self->m_ScoreDataOffset[1]=(int)(MD+9);
self->m_ScoreDataLength[1] = (int)(MD+10);
self->m_ScoreDataOffset[2]= (int)(MD+11);
self->m_ScoreDataLength[2] = (int)(MD+12);
self->m_ScoreDataOffset[3] = (int)(MD+13);
self->m_ScoreDataLength[3] = (int)(MD+14);
self->m_ImagePackDataOffset = (int)(MD+15);
self->m_AnimationDataOffset = (int)(MD+17);
self->m_AnimationDataLength =(int)(MD+18);
if((int)(MD+76)==1){
	char* curData=[MappedFile subdataWithRange:NSMakeRange(80,36)].bytes;
	char* CString=[[MappedFile subdataWithRange:NSMakeRange(80,36)] subdataWithRange:(NSRange)(curData+1)].bytes;
	self->m_Pronunciation=[NSString stringWithCString:CString encoding:4];
	self->m_Generation=(unsigned int)(curData+1);
	self->m_Genre=(unsigned int)(curData+1);
    self->m_CourseDifficulties[4] = (curData+1);
    self->m_ScoreDataOffset[4] = (curData+6);
    self->m_ScoreDataLength[4] = (curData+7);
    if(self->m_ScoreDataLength[4]){
    	self->m_NumberOfCourses = 5;
    }
}
else{
	[self updateInfo];

}
int v27=228;
  if ( self->m_NumberOfCourses >= 1 )
  {
    v28 = 0;
    do
    {

      v31 = [MappedFile subdataWithRange:NSMakeRange(self->m_ScoreDataOffset + 4 * v28 + 432, 1)];
      v32 = *(_BYTE *)objc_msgSend(v31, "bytes");

      if ( v32 != 1 )
        LOBYTE(v32) = 0;
      v34->m_HasBranch[v28++] = v32;
    }
    while ( v28 < *(_DWORD *)&v34->NSObject_opaque[v29] );
  }


}



@end