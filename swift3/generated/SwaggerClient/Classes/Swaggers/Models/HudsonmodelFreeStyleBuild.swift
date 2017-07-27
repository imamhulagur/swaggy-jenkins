//
// HudsonmodelFreeStyleBuild.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class HudsonmodelFreeStyleBuild: JSONEncodable {

    public var _class: String?
    public var number: Int32?
    public var url: String?
    public var actions: [HudsonmodelCauseAction]?
    public var building: Bool?
    public var description: String?
    public var displayName: String?
    public var duration: Int32?
    public var estimatedDuration: Int32?
    public var executor: String?
    public var fullDisplayName: String?
    public var id: String?
    public var keepLog: Bool?
    public var queueId: Int32?
    public var result: String?
    public var timestamp: Int32?
    public var builtOn: String?
    public var changeSet: HudsonscmEmptyChangeLogSet?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["number"] = self.number?.encodeToJSON()
        nillableDictionary["url"] = self.url
        nillableDictionary["actions"] = self.actions?.encodeToJSON()
        nillableDictionary["building"] = self.building
        nillableDictionary["description"] = self.description
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["duration"] = self.duration?.encodeToJSON()
        nillableDictionary["estimatedDuration"] = self.estimatedDuration?.encodeToJSON()
        nillableDictionary["executor"] = self.executor
        nillableDictionary["fullDisplayName"] = self.fullDisplayName
        nillableDictionary["id"] = self.id
        nillableDictionary["keepLog"] = self.keepLog
        nillableDictionary["queueId"] = self.queueId?.encodeToJSON()
        nillableDictionary["result"] = self.result
        nillableDictionary["timestamp"] = self.timestamp?.encodeToJSON()
        nillableDictionary["builtOn"] = self.builtOn
        nillableDictionary["changeSet"] = self.changeSet?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
