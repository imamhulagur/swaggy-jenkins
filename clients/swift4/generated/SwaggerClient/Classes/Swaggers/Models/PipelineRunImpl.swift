//
// PipelineRunImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class PipelineRunImpl: Codable {

    public var _class: String?
    public var links: PipelineRunImpllinks?
    public var durationInMillis: Int?
    public var enQueueTime: String?
    public var endTime: String?
    public var estimatedDurationInMillis: Int?
    public var id: String?
    public var organization: String?
    public var pipeline: String?
    public var result: String?
    public var runSummary: String?
    public var startTime: String?
    public var state: String?
    public var type: String?
    public var commitId: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case links = "_links"
        case durationInMillis = "durationInMillis"
        case enQueueTime = "enQueueTime"
        case endTime = "endTime"
        case estimatedDurationInMillis = "estimatedDurationInMillis"
        case id = "id"
        case organization = "organization"
        case pipeline = "pipeline"
        case result = "result"
        case runSummary = "runSummary"
        case startTime = "startTime"
        case state = "state"
        case type = "type"
        case commitId = "commitId"
    }

}