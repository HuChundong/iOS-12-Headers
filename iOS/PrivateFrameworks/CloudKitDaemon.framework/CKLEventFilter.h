//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CKLEventFilter : NSObject
{
    _Bool _simulatorMessagesOnly;
    unsigned long long _logTypes;
    NSString *_processName;
    NSDictionary *_categoriesBySubsystem;
}

@property(retain, nonatomic) NSDictionary *categoriesBySubsystem; // @synthesize categoriesBySubsystem=_categoriesBySubsystem;
@property(nonatomic) _Bool simulatorMessagesOnly; // @synthesize simulatorMessagesOnly=_simulatorMessagesOnly;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) unsigned long long logTypes; // @synthesize logTypes=_logTypes;
- (void).cxx_destruct;
- (_Bool)matchesEvent:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)_initFilterDict;
- (_Bool)hasOnlyLogType:(unsigned long long)arg1;
- (_Bool)hasLogType:(unsigned long long)arg1;

@end

