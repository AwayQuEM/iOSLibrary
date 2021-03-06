//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSSecureCoding>
{
    CALayer *_target;
    CAStateElement *_source;
}

+ (_Bool)supportsSecureCoding;
+ (void)CAMLParserStartElement:(id)arg1;
@property(retain, nonatomic) CAStateElement *source; // @synthesize source=_source;
@property(nonatomic) __weak CALayer *target; // @synthesize target=_target;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (id)save;
- (void)apply:(id)arg1;
- (_Bool)matches:(id)arg1;
@property(readonly, copy, nonatomic) NSString *keyPath;
- (id)targetName;
- (void)dealloc;

@end

