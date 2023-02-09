#import <objc/runtime.h>

#import "TaikoController.h"
#import "ServerController.h"
#import "ISceneManager.h"
#import "ISongInfo.h"


NSMutableDictionary *application;
TaikoController *taikoController;
ServerController *serverController;

%hook TaikoEquipmentManager
- (void)loadTaikos:(id)arg1 {
        NSMutableDictionary *newTaikos = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoTaiko]];
        [newTaikos addEntriesFromDictionary:arg1];
        %orig(newTaikos);
if (ShowLog) {
            NSLog(@"%@ - Added Taikos", AppName);
        }
else {
        %orig;
    }
}
- (void)loadTones:(id)arg1 {
    NSMutableDictionary *newTones = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoTones]];
    [newTones addEntriesFromDictionary:arg1];
        %orig(newTones);
        if (ShowLog) {
            NSLog(@"%@ - Added Tones", AppName);
        }
    else {
        %orig;
    }
    
}
- (void)loadCostumes:(id)arg1 {
        NSMutableDictionary *newCostumes = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoCostume]];
        [newCostumes addEntriesFromDictionary:arg1];
        %orig(newCostumes);
        if (ShowLog) {
            NSLog(@"%@ - Added Costumes", AppName);
        }
    else {
        %orig;
    }
}
- (void)loadThemes:(id)arg1 {
        NSMutableDictionary *newThemes = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoThemes]];
        [newThemes addEntriesFromDictionary:arg1];
        %orig(newThemes);
        if (ShowLog) {
            NSLog(@"%@ - Added Themes", AppName);
        }
    else {
        %orig;
    }
}

%end


%hook TaikoPackageInfo
- (BOOL)checkCollaboTimeLimit {
    return YES;
}
%end



%hook ISceneManager
- (void)start{
    NSMutableArray* array=MSHookIvar<NSMutableArray*>(self,"m_SongInfoArray");
    [array removeAllObjects];
    id TC=[[TaikoController alloc] init];
    [TC setupSongList];
    [array addObjectsFromArray:[TC OfficialInfoArray]];
   // [array addObjectsFromArray:[TC ]]
    %orig;
}

%end


%hook TaikoEquipment
- (BOOL)checkDigest {
    return YES;
    }
%end


%hook ISongInfo
- (BOOL)isValid {
            return YES;

}
%end


%hook ISceneManager
-(id)loadCollaboInfo {
    id orig = %orig;
    self.dontamaChallengeCourse = 99999;
    self.dontamaChallengePoint = 99999;
    self.dontamaChallengeTicket = 99999;
    self.dontamaChallengeState = 99999;
    self.preservedDontamaPoint = 99999;
    return orig;
}
%end

