//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIDictationConnectionFilterState : NSObject
{
    struct __CFString *_transform;
    CDUnknownBlockType _pendingDictationCommand;
}

@property(copy, nonatomic) CDUnknownBlockType pendingDictationCommand; // @synthesize pendingDictationCommand=_pendingDictationCommand;
@property(nonatomic) struct __CFString *transform; // @synthesize transform=_transform;
- (void)dealloc;

@end

