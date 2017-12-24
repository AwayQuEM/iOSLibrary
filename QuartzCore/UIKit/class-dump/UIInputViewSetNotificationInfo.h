//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIInputViewSetNotificationInfo : NSObject
{
    _Bool _changedAccessoryOnly;
    _Bool _forceNotification;
    _Bool _wasCausedRemotely;
    _Bool _dueToRotation;
    double _duration;
    unsigned long long _options;
    struct CGPoint _beginCenter;
    struct CGPoint _endCenter;
    struct CGRect _beginFrame;
    struct CGRect _endFrame;
    struct CGRect _bounds;
}

+ (id)info;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint endCenter; // @synthesize endCenter=_endCenter;
@property(nonatomic) struct CGPoint beginCenter; // @synthesize beginCenter=_beginCenter;
@property(nonatomic) _Bool dueToRotation; // @synthesize dueToRotation=_dueToRotation;
@property(nonatomic) _Bool wasCausedRemotely; // @synthesize wasCausedRemotely=_wasCausedRemotely;
@property(nonatomic) _Bool forceNotification; // @synthesize forceNotification=_forceNotification;
@property(nonatomic) _Bool changedAccessoryOnly; // @synthesize changedAccessoryOnly=_changedAccessoryOnly;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
- (void)populateEndInfoWithFrame:(struct CGRect)arg1;
- (void)populateStartInfoWithFrame:(struct CGRect)arg1;
- (void)populateWithAnimationStyle:(id)arg1;
- (_Bool)containsChange;
- (void)logGeometry;
@property(readonly, nonatomic) NSDictionary *privateUserInfo;
- (id)rotationUserInfo;
@property(readonly, nonatomic) NSDictionary *userInfo;
- (id)inverseInfo;
- (id)init;

@end

