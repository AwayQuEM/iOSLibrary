//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIKeyboardCandidate.h"

#import "NSCopying.h"

@class NSString;

@interface UITextSuggestion : TIKeyboardCandidate <NSCopying>
{
    _Bool __shouldPersist;
    NSString *_inputText;
    NSString *_searchText;
    NSString *_displayText;
    NSString *_headerText;
}

+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;
+ (id)textSuggestionWithInputText:(id)arg1;
@property(readonly, nonatomic) _Bool _shouldPersist; // @synthesize _shouldPersist=__shouldPersist;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
- (id)input;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;

@end

