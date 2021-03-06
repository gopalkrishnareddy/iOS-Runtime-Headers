/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReminder : EKCalendarItem {
    BOOL  _hadRecurrences;
}

@property (getter=isCompleted, nonatomic) BOOL completed;
@property (nonatomic, copy) NSDate *completionDate;
@property (nonatomic, copy) NSDateComponents *dueDateComponents;
@property (nonatomic) unsigned int priority;
@property (nonatomic, copy) NSDateComponents *startDateComponents;

+ (void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2;
+ (id)reminderWithEventStore:(id)arg1;

- (id)_persistentReminder;
- (void)_sendModifiedNote;
- (id)bestDisplayAlarm;
- (void)clearParentID;
- (BOOL)commit:(id*)arg1;
- (id)completionDate;
- (id)description;
- (unsigned int)displayOrder;
- (id)dueDate;
- (id)dueDateComponents;
- (id)externalURI;
- (id)firstAlertDate;
- (BOOL)hadRecurrences;
- (id)initWithPersistentObject:(id)arg1;
- (BOOL)isCompleted;
- (id)parentID;
- (id)reminderIdentifier;
- (void)setCompleted:(BOOL)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setDisplayOrder:(unsigned int)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateComponents:(id)arg1;
- (void)setFirstAlertDate:(id)arg1;
- (void)setHadRecurrences:(BOOL)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startDateComponents;
- (id)startDateForRecurrence;
- (BOOL)validate:(id*)arg1;

@end
