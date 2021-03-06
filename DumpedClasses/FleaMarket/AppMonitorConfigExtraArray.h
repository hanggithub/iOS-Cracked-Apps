//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary, NSString;

@interface AppMonitorConfigExtraArray : NSObject
{
    NSMutableDictionary *_dimensions;
    NSMutableDictionary *_args;
    NSString *_sampling;
    NSMutableDictionary *_dic_dimensions_search;
    NSMutableDictionary *_dic_arg_search;
    NSLock *_dimensions_lock;
    NSLock *_arg_lock;
}

@property(retain, nonatomic) NSLock *arg_lock; // @synthesize arg_lock=_arg_lock;
@property(retain, nonatomic) NSLock *dimensions_lock; // @synthesize dimensions_lock=_dimensions_lock;
@property(retain, nonatomic) NSMutableDictionary *dic_arg_search; // @synthesize dic_arg_search=_dic_arg_search;
@property(retain, nonatomic) NSMutableDictionary *dic_dimensions_search; // @synthesize dic_dimensions_search=_dic_dimensions_search;
@property(retain, nonatomic) NSString *sampling; // @synthesize sampling=_sampling;
@property(retain, nonatomic) NSMutableDictionary *args; // @synthesize args=_args;
@property(retain, nonatomic) NSMutableDictionary *dimensions; // @synthesize dimensions=_dimensions;
- (void).cxx_destruct;
- (id)setContentWithDic:(id)arg1;
- (void)parseAPIValues:(id)arg1 DimeOrArgs:(id)arg2 Key:(id)arg3;
- (id)getSampling;
- (void)setWithSampling:(id)arg1;
- (id)getArgs:(id)arg1;
- (id)getDimensions:(id)arg1;
- (id)init;

@end

