//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPStoreMnet : NSObject
{
    NSString *_ipString;
    long long _family;
    struct sockaddr_in6 _address;
}

+ (id)IPStoreMnetWithIP:(id)arg1 family:(long long)arg2 sockaddr:(struct sockaddr_in6)arg3;
@property(nonatomic) struct sockaddr_in6 address; // @synthesize address=_address;
@property(nonatomic) long long family; // @synthesize family=_family;
@property(retain, nonatomic) NSString *ipString; // @synthesize ipString=_ipString;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

