/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSOUTLOOKCALENDARGROUPFETCHER_H
#define MSOUTLOOKCALENDARGROUPFETCHER_H

#import "MSOutlookModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOutlookCalendarCollectionFetcher;
@class MSOutlookCalendarCollectionFetcher;
@class MSOutlookCalendarFetcher;
@class MSOutlookCalendarGroupOperations;


/** MSOutlookCalendarGroupFetcher
 *
 */
@interface MSOutlookCalendarGroupFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOutlookCalendarGroupOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOutlookCalendarGroup *, MSOrcError *))callback;
- (void)update:(MSOutlookCalendarGroup *)CalendarGroup callback:(void (^)(MSOutlookCalendarGroup *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOutlookCalendarGroupFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookCalendarGroupFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOutlookCalendarGroupFetcher *)select:(NSString *)params;
- (MSOutlookCalendarGroupFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=calendars) MSOutlookCalendarCollectionFetcher *calendars;

- (MSOutlookCalendarFetcher *)calendarsById:(id)identifier;


@end

#endif
