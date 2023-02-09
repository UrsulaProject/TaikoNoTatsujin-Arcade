#line 1 "/Volumes/Swap/Development/MUGTechs/机密/TaikoiOSMOD/Taiko-No-Tatsujin-Plus-MOD/TaikoNoTatsujinPlus/TaikoNoTatsujinPlus.xm"
#import <objc/runtime.h>

#import "TaikoController.h"
#import "ServerController.h"
#import "ISceneManager.h"
#import "ISongInfo.h"


NSMutableDictionary *application;
TaikoController *taikoController;
ServerController *serverController;

#include <logos/logos.h>
#include <substrate.h>
@class ISongInfo; @class TaikoEquipment; @class ISceneManager; @class TaikoEquipmentManager; @class TaikoPackageInfo; 
static void (*_logos_orig$_ungrouped$TaikoEquipmentManager$loadTaikos$)(TaikoEquipmentManager*, SEL, id); static void _logos_method$_ungrouped$TaikoEquipmentManager$loadTaikos$(TaikoEquipmentManager*, SEL, id); static void (*_logos_orig$_ungrouped$TaikoEquipmentManager$loadTones$)(TaikoEquipmentManager*, SEL, id); static void _logos_method$_ungrouped$TaikoEquipmentManager$loadTones$(TaikoEquipmentManager*, SEL, id); static void (*_logos_orig$_ungrouped$TaikoEquipmentManager$loadCostumes$)(TaikoEquipmentManager*, SEL, id); static void _logos_method$_ungrouped$TaikoEquipmentManager$loadCostumes$(TaikoEquipmentManager*, SEL, id); static void (*_logos_orig$_ungrouped$TaikoEquipmentManager$loadThemes$)(TaikoEquipmentManager*, SEL, id); static void _logos_method$_ungrouped$TaikoEquipmentManager$loadThemes$(TaikoEquipmentManager*, SEL, id); static BOOL (*_logos_orig$_ungrouped$TaikoPackageInfo$checkCollaboTimeLimit)(TaikoPackageInfo*, SEL); static BOOL _logos_method$_ungrouped$TaikoPackageInfo$checkCollaboTimeLimit(TaikoPackageInfo*, SEL); static void (*_logos_orig$_ungrouped$ISceneManager$start)(ISceneManager*, SEL); static void _logos_method$_ungrouped$ISceneManager$start(ISceneManager*, SEL); static id (*_logos_orig$_ungrouped$ISceneManager$loadCollaboInfo)(ISceneManager*, SEL); static id _logos_method$_ungrouped$ISceneManager$loadCollaboInfo(ISceneManager*, SEL); static BOOL (*_logos_orig$_ungrouped$TaikoEquipment$checkDigest)(TaikoEquipment*, SEL); static BOOL _logos_method$_ungrouped$TaikoEquipment$checkDigest(TaikoEquipment*, SEL); static BOOL (*_logos_orig$_ungrouped$ISongInfo$isValid)(ISongInfo*, SEL); static BOOL _logos_method$_ungrouped$ISongInfo$isValid(ISongInfo*, SEL); 

#line 13 "/Volumes/Swap/Development/MUGTechs/机密/TaikoiOSMOD/Taiko-No-Tatsujin-Plus-MOD/TaikoNoTatsujinPlus/TaikoNoTatsujinPlus.xm"

static void _logos_method$_ungrouped$TaikoEquipmentManager$loadTaikos$(TaikoEquipmentManager* self, SEL _cmd, id arg1) {
        NSMutableDictionary *newTaikos = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoTaiko]];
        [newTaikos addEntriesFromDictionary:arg1];
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadTaikos$(self, _cmd, newTaikos);
if (ShowLog) {
            NSLog(@"%@ - Added Taikos", AppName);
        }
else {
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadTaikos$(self, _cmd, arg1);
    }
}
static void _logos_method$_ungrouped$TaikoEquipmentManager$loadTones$(TaikoEquipmentManager* self, SEL _cmd, id arg1) {
    NSMutableDictionary *newTones = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoTones]];
    [newTones addEntriesFromDictionary:arg1];
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadTones$(self, _cmd, newTones);
        if (ShowLog) {
            NSLog(@"%@ - Added Tones", AppName);
        }
    else {
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadTones$(self, _cmd, arg1);
    }
    
}
static void _logos_method$_ungrouped$TaikoEquipmentManager$loadCostumes$(TaikoEquipmentManager* self, SEL _cmd, id arg1) {
        NSMutableDictionary *newCostumes = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoCostume]];
        [newCostumes addEntriesFromDictionary:arg1];
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadCostumes$(self, _cmd, newCostumes);
        if (ShowLog) {
            NSLog(@"%@ - Added Costumes", AppName);
        }
    else {
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadCostumes$(self, _cmd, arg1);
    }
}
static void _logos_method$_ungrouped$TaikoEquipmentManager$loadThemes$(TaikoEquipmentManager* self, SEL _cmd, id arg1) {
        NSMutableDictionary *newThemes = [NSMutableDictionary dictionaryWithDictionary:[taikoController ExtraTaikoThemes]];
        [newThemes addEntriesFromDictionary:arg1];
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadThemes$(self, _cmd, newThemes);
        if (ShowLog) {
            NSLog(@"%@ - Added Themes", AppName);
        }
    else {
        _logos_orig$_ungrouped$TaikoEquipmentManager$loadThemes$(self, _cmd, arg1);
    }
}





static BOOL _logos_method$_ungrouped$TaikoPackageInfo$checkCollaboTimeLimit(TaikoPackageInfo* self, SEL _cmd) {
    return YES;
}





static void _logos_method$_ungrouped$ISceneManager$start(ISceneManager* self, SEL _cmd){
    NSMutableArray* array=MSHookIvar<NSMutableArray*>(self,"m_SongInfoArray");
    [array removeAllObjects];
    id TC=[[TaikoController alloc] init];
    [TC setupSongList];
    [array addObjectsFromArray:[TC OfficialInfoArray]];
   
    _logos_orig$_ungrouped$ISceneManager$start(self, _cmd);
}





static BOOL _logos_method$_ungrouped$TaikoEquipment$checkDigest(TaikoEquipment* self, SEL _cmd) {
    return YES;
    }




static BOOL _logos_method$_ungrouped$ISongInfo$isValid(ISongInfo* self, SEL _cmd) {
            return YES;

}




static id _logos_method$_ungrouped$ISceneManager$loadCollaboInfo(ISceneManager* self, SEL _cmd) {
    id orig = _logos_orig$_ungrouped$ISceneManager$loadCollaboInfo(self, _cmd);
    self.dontamaChallengeCourse = 99999;
    self.dontamaChallengePoint = 99999;
    self.dontamaChallengeTicket = 99999;
    self.dontamaChallengeState = 99999;
    self.preservedDontamaPoint = 99999;
    return orig;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$TaikoEquipmentManager = objc_getClass("TaikoEquipmentManager"); MSHookMessageEx(_logos_class$_ungrouped$TaikoEquipmentManager, @selector(loadTaikos:), (IMP)&_logos_method$_ungrouped$TaikoEquipmentManager$loadTaikos$, (IMP*)&_logos_orig$_ungrouped$TaikoEquipmentManager$loadTaikos$);MSHookMessageEx(_logos_class$_ungrouped$TaikoEquipmentManager, @selector(loadTones:), (IMP)&_logos_method$_ungrouped$TaikoEquipmentManager$loadTones$, (IMP*)&_logos_orig$_ungrouped$TaikoEquipmentManager$loadTones$);MSHookMessageEx(_logos_class$_ungrouped$TaikoEquipmentManager, @selector(loadCostumes:), (IMP)&_logos_method$_ungrouped$TaikoEquipmentManager$loadCostumes$, (IMP*)&_logos_orig$_ungrouped$TaikoEquipmentManager$loadCostumes$);MSHookMessageEx(_logos_class$_ungrouped$TaikoEquipmentManager, @selector(loadThemes:), (IMP)&_logos_method$_ungrouped$TaikoEquipmentManager$loadThemes$, (IMP*)&_logos_orig$_ungrouped$TaikoEquipmentManager$loadThemes$);Class _logos_class$_ungrouped$TaikoPackageInfo = objc_getClass("TaikoPackageInfo"); MSHookMessageEx(_logos_class$_ungrouped$TaikoPackageInfo, @selector(checkCollaboTimeLimit), (IMP)&_logos_method$_ungrouped$TaikoPackageInfo$checkCollaboTimeLimit, (IMP*)&_logos_orig$_ungrouped$TaikoPackageInfo$checkCollaboTimeLimit);Class _logos_class$_ungrouped$ISceneManager = objc_getClass("ISceneManager"); MSHookMessageEx(_logos_class$_ungrouped$ISceneManager, @selector(start), (IMP)&_logos_method$_ungrouped$ISceneManager$start, (IMP*)&_logos_orig$_ungrouped$ISceneManager$start);MSHookMessageEx(_logos_class$_ungrouped$ISceneManager, @selector(loadCollaboInfo), (IMP)&_logos_method$_ungrouped$ISceneManager$loadCollaboInfo, (IMP*)&_logos_orig$_ungrouped$ISceneManager$loadCollaboInfo);Class _logos_class$_ungrouped$TaikoEquipment = objc_getClass("TaikoEquipment"); MSHookMessageEx(_logos_class$_ungrouped$TaikoEquipment, @selector(checkDigest), (IMP)&_logos_method$_ungrouped$TaikoEquipment$checkDigest, (IMP*)&_logos_orig$_ungrouped$TaikoEquipment$checkDigest);Class _logos_class$_ungrouped$ISongInfo = objc_getClass("ISongInfo"); MSHookMessageEx(_logos_class$_ungrouped$ISongInfo, @selector(isValid), (IMP)&_logos_method$_ungrouped$ISongInfo$isValid, (IMP*)&_logos_orig$_ungrouped$ISongInfo$isValid);} }
#line 112 "/Volumes/Swap/Development/MUGTechs/机密/TaikoiOSMOD/Taiko-No-Tatsujin-Plus-MOD/TaikoNoTatsujinPlus/TaikoNoTatsujinPlus.xm"
